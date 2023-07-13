function canFinish(numCourses, prerequisites) {
  const graph = buildGraph(numCourses, prerequisites);
  const visited = new Set();
  const visiting = new Set();

  for (let course = 0; course < numCourses; course++) {
    if (!dfs(course)) {
      return false;
    }
  }

  return true;

  function dfs(course) {
    if (visited.has(course)) {
      return true;
    }

    if (visiting.has(course)) {
      return false;
    }

    visiting.add(course);

    const prerequisites = graph[course];

    for (const neighbors of prerequisites) {
      if (!dfs(neighbors)) {
        return false;
      }
    }

    visiting.delete(course);
    visited.add(course);

    return true;
  }

  function buildGraph(numCourses, prerequisites) {
    const graph = Array.from({ length: numCourses }, () => []);

    for (const [course, prerequisite] of prerequisites) {
      graph[course].push(prerequisite);
    }
  console.log("graph", graph)
    return graph;
  }
}
