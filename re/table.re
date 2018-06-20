open BsReactNative;

let beerDisplayRowStyle = Style.(
    style
    ([
    justifyContent(Center), 
    alignItems(Center),
    Style.backgroundColor(String("#6698FF"))
    ])
);

let beerDisplayRow = content => (
    <View style=(beerDisplayRowStyle)>
          <Text> (ReasonReact.string(content)) </Text>
    </View>
);