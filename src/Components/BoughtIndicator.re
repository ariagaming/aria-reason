open Models;

let boughtIndicatorComponent =
  ReasonReact.statelessComponent("BoughtIndicator");

let createIndicator = ((c1, c2)) =>
  <svg height="11" width="11">
    <circle cx="6" cy="6" r="4" fill=c1 stroke=c2 />
  </svg>;

let make = (~source, _children) => {
  ...boughtIndicatorComponent,
  render: _self => {
    let color =
      switch (source) {
      | RacialPackage => ("orange", "orange")
      | ProfessionalPackage => ("blue", "blue")
      | XP => ("black", "black")
      | Gift => ("black", "black")
      | NoSource => ("transparent", "black")
      };
    createIndicator(color);
  },
};