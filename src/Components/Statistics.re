open Models;

let component = ReasonReact.statelessComponent("CharacterStatistics");

let make = (~statistics: statistics, _children) => {
  ...component,
  render: _self =>
    <div className="character-statistics">
      <div className="character-statistic str">
        <div className="calculated">
          (ReasonReact.string(string_of_int(statistics.str.calculated)))
        </div>
        <div className="total">
          (ReasonReact.string(string_of_int(statistics.str.total)))
        </div>
      </div>
      <div className="character-statistic agi">
        <div className="calculated">
          (ReasonReact.string(string_of_int(statistics.agi.calculated)))
        </div>
        <div className="total">
          (ReasonReact.string(string_of_int(statistics.agi.total)))
        </div>
      </div>
      <div className="character-statistic inu">
        <div className="calculated">
          (ReasonReact.string(string_of_int(statistics.inu.calculated)))
        </div>
        <div className="total">
          (ReasonReact.string(string_of_int(statistics.inu.total)))
        </div>
      </div>
      <div className="character-statistic per">
        <div className="calculated">
          (ReasonReact.string(string_of_int(statistics.per.calculated)))
        </div>
        <div className="total">
          (ReasonReact.string(string_of_int(statistics.per.total)))
        </div>
      </div>
    </div>,
};