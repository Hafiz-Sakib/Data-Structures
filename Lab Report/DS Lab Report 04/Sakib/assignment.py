def dfs(graph, user, visited):
    visited.add(user)
    total_friends = 0

    for friend in graph.get(user, []):
        if friend not in visited:
            total_friends += dfs(graph, friend, visited)

    return total_friends + 1  

def find_most_influential_user(social_network):
    most_influential_user = None
    max_friends = -1

    for user in social_network:
        visited = set()
        friends_count = dfs(social_network, user, visited)
        if friends_count > max_friends:
            max_friends = friends_count
            most_influential_user = user

    return most_influential_user, max_friends - 1 

social_network = {
    'A': ['B', 'C', 'D', 'E', 'F'],
    'B': ['M', 'N', 'O'],
    'C': ['I', 'J'],
    'D': ['X', 'Y', 'Z'],
    'E': ['P', 'Q'],
    'F': ['G', 'H']
}

most_influential, num_connected_users = find_most_influential_user(social_network)
print(f"The most influential user is: {most_influential}")
print(f"Number of users connected to {most_influential}: {num_connected_users}")
