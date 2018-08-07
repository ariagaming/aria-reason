open Defaults;
let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="app">
      <Page>
        <CharacterInfo />
        <Statistics statistics=character.statistics />
        <StatisticsSecondary />
        <StatisticsCombat />
        <Skills skills=character.skills />
        <Resistances resistances=character.resistances />
        <Professions professions=character.professions />
        <Features features=character.features />
        <Languages languages=character.languages />
        <Weapons weapons=character.weapons />
        <Specials specials=character.specials />
        <img className="sword" src="./assets/sword.png" />
      </Page>
      <Page> <div> (ReasonReact.string("There we go!!")) </div> </Page>
      <VersionIndicator />
    </div>,
};