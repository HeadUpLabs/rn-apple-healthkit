save a numeric waist cirumference value to Healthkit

`saveWeight` accepts an options object containing a numeric weight value:

```javascript
let options = {
  value: 45
};
```

```javascript
AppleHealthKit.saveWaistCircumference(options: Object, (err: Object, results: Object) => {
    if (err) {
        console.log("error saving waist circumference to Healthkit: ", err);
        return;
    }
    // Done
});
```
