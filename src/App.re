open Models;

type action =
  | Nothing;
type appState = {character};

let initialState = () : appState => {character: Defaults.character};

let component = ReasonReact.reducerComponent("App");
let make = _children => {
  ...component,
  initialState,
  reducer: (action: action, state: appState) => ReasonReact.Update(state),
  render: _self =>
    <div className="app">
      <Page>
        <CharacterInfo />
        <Statistics statistics=_self.state.character.statistics />
        <StatisticsSecondary />
        <StatisticsCombat />
        <Skills skills=_self.state.character.skills />
        <Resistances resistances=_self.state.character.resistances />
        <Professions professions=_self.state.character.professions />
        <Features features=_self.state.character.features />
        <Languages languages=_self.state.character.languages />
        <Weapons weapons=_self.state.character.weapons />
        <Specials specials=_self.state.character.specials />
        <Equipments equipments=_self.state.character.equipments />
        <img className="sword" src="./assets/sword.png" />
      </Page>
      <Page> <div> (ReasonReact.string("There we go!!")) </div> </Page>
      <VersionIndicator />
    </div>,
};