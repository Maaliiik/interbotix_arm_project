import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Load the benchmark results
df = pd.read_csv('benchmark_results.csv')

# Create a 3D scatter plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
scatter = ax.scatter(df['position_x'], df['position_y'], df['position_z'], c=df['success'], cmap='coolwarm')

# Add color bar
cbar = plt.colorbar(scatter)
cbar.set_label('Success Rate')

# Set labels
ax.set_xlabel('X Position')
ax.set_ylabel('Y Position')
ax.set_zlabel('Z Position')
plt.title('3D Planning Success Rate')
plt.show()

