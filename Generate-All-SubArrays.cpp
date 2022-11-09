int arr[100];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int start = 0; start < n; start++) {
		for (int last = start; last < n; last++) {
			cout << "subarray from " << start << " to " << last << " : ";
			for (int k = start; k <= last; k++)
				cout << arr[k] << " ";
			cout << endl;
		}
	}
}
