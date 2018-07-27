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
      | None => ("transparent", "black")
      };
    createIndicator(color);
  },
};
/*
 boughtIndicator : Source -> Html Msg
 boughtIndicator boughtFrom =
     let
         getColor source =
             case source of
                 None ->
                     "white"

                 RacialPackage ->
                     "rgba(1, 188, 213, 1.000)"

                 ProfessionalPackage ->
                     "rgba(254, 64, 129, 1.000)"

                 XP ->
                     "black"

                 _ ->
                     "teal"
     in
         svg [ height "10", width "12" ]
             [ circle [ cx "6", cy "5", r "4", fill <| (getColor boughtFrom), stroke "black" ] []
             ] */