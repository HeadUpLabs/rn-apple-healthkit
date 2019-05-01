A quantity sample type that measures the amount of active energy the user has burned.

```javascript
let d = new Date(2016,1,1);
let options = {
    unit: 'minute',	// optional; default 'minute'
    startDate: (new Date(2016,10,1)).toISOString(), // required
    endDate: (new Date()).toISOString(), // optional; default now
    ascending: false,	// optional; default false
    limit:10, // optional; default no limit
};
```

```javascript
AppleHealthKit.getAppleExerciseTimeSamples(options: Object, (err: Object, results: Object) => {
    if (err) {
        return;
    }
    console.log(results)
});
```