open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Content");

/*

 Features are a simple construct.

 For example, armor, you get 3.5 armor per point of your expertise,
 base : 0
 race : 1
 profession : 2
 equipment : 0
 bonus : 0
 total : 3 (base + race + profession + equipment + bonus)
 factor : 3.5
 calculated : 13
 prefix : "+"
 postfix : "%"

 result:

 (3) +13% Armor

 */

module ReanderFeature = {
  let innerFeature = ReasonReact.statelessComponent("innerFeature");
  let make = (~feature: feature, _children) => {
    ...innerFeature,
    render: _self =>
      <div className="content-row">
        <span style=(ReactDOMRe.Style.make(~flexBasis="20%", ()))>
          (ReasonReact.string("(" ++ string_of_int(feature.total) ++ ")"))
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="20%", ~textAlign="center", ())
          )>
          (ReasonReact.string(string_of_int(feature.base)))
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ())
          )>
          (ReasonReact.string(feature.title))
        </span>
      </div>,
  };
};

let make = (~features: features, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="features" className="content-features">
      ...(
           ReasonReact.array(
             Array.map(
               (feature: feature) =>
                 <ReanderFeature key=feature.title feature />,
               features,
             ),
           )
         )
    </Content>,
};