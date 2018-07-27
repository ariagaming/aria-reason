let component = ReasonReact.statelessComponent("CharacterStatistics");

let make = _children => {
  ...component,
  render: _self =>
    <div className="character-statistics">
      <div className="character-statistic str">
        <div className="total"> (ReasonReact.string("4")) </div>
        <div className="calculated"> (ReasonReact.string("40")) </div>
      </div>
      <div className="character-statistic agi">
        <div className="total"> (ReasonReact.string("3")) </div>
        <div className="calculated"> (ReasonReact.string("30")) </div>
      </div>
      <div className="character-statistic inu">
        <div className="total"> (ReasonReact.string("1")) </div>
        <div className="calculated"> (ReasonReact.string("10")) </div>
      </div>
      <div className="character-statistic per">
        <div className="total"> (ReasonReact.string("2")) </div>
        <div className="calculated"> (ReasonReact.string("24")) </div>
      </div>
    </div>,
};