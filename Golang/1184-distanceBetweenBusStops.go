
func distanceBetweenBusStops(distance []int, start int, destination int) int {
	total := 0
	directSum := 0
	for i := 0; i < len(distance); i++ {
		total += distance[i]
	}
	if start > destination {
		start, destination = destination, start
	}
	for i := start; i < destination; i++ {
		directSum += distance[i]
	}
	if (total - directSum) > directSum {
		return directSum
	}
	return total - directSum
}

/*
Success
Runtime: 0 ms, faster than 100.00% of Go online submissions for Distance Between Bus Stops.
Memory Usage: 2.8 MB, less than 100.00% of Go online submissions for Distance Between Bus Stops.
*/
