//------------------------------------------------------------------------------
//  randomnumbertable.cc
//  (C) 2008 Radon Labs GmbH
//------------------------------------------------------------------------------
#include "stdneb.h"
#include "util/randomnumbertable.h"

namespace Util
{
const float RandomNumberTable::randTable[tableSize] = {
    0.001251f,
    0.563585f,
    0.193304f,
    0.808740f,
    0.585009f,
    0.479873f,
    0.350291f,
    0.895962f,
    0.822840f,
    0.746605f,
    0.174108f,
    0.858943f,
    0.710501f,
    0.513535f,
    0.303995f,
    0.014985f,
    0.091403f,
    0.364452f,
    0.147313f,
    0.165899f,
    0.988525f,
    0.445692f,
    0.119083f,
    0.004669f,
    0.008911f,
    0.377880f,
    0.531663f,
    0.571184f,
    0.601764f,
    0.607166f,
    0.166234f,
    0.663045f,
    0.450789f,
    0.352123f,
    0.057039f,
    0.607685f,
    0.783319f,
    0.802606f,
    0.519883f,
    0.301950f,
    0.875973f,
    0.726676f,
    0.955901f,
    0.925718f,
    0.539354f,
    0.142338f,
    0.462081f,
    0.235328f,
    0.862239f,
    0.209601f,
    0.779656f,
    0.843654f,
    0.996796f,
    0.999695f,
    0.611499f,
    0.392438f,
    0.266213f,
    0.297281f,
    0.840144f,
    0.023743f,
    0.375866f,
    0.092624f,
    0.677206f,
    0.056215f,
    0.008789f,
    0.918790f,
    0.275887f,
    0.272896f,
    0.587909f,
    0.691183f,
    0.837611f,
    0.726493f,
    0.484939f,
    0.205359f,
    0.743736f,
    0.468459f,
    0.457961f,
    0.949156f,
    0.744438f,
    0.108280f,
    0.599048f,
    0.385235f,
    0.735008f,
    0.608966f,
    0.572405f,
    0.361339f,
    0.151555f,
    0.225105f,
    0.425153f,
    0.802881f,
    0.517106f,
    0.989990f,
    0.751549f,
    0.345561f,
    0.168981f,
    0.657308f,
    0.491897f,
    0.063540f,
    0.699759f,
    0.504807f,
    0.147496f,
    0.949583f,
    0.141575f,
    0.905118f,
    0.692892f,
    0.303049f,
    0.426557f,
    0.070376f,
    0.966613f,
    0.683187f,
    0.153233f,
    0.877255f,
    0.821680f,
    0.582049f,
    0.191351f,
    0.177892f,
    0.817194f,
    0.475265f,
    0.155553f,
    0.503922f,
    0.732017f,
    0.405591f,
    0.279580f,
    0.568743f,
    0.682241f,
    0.755852f,
    0.721915f,
    0.475295f,
    0.123020f,
    0.367809f,
    0.834681f,
    0.035096f,
    0.517014f,
    0.662984f,
    0.426221f,
    0.104678f,
    0.949339f,
    0.921384f,
    0.549547f,
    0.345988f,
    0.471725f,
    0.374981f,
    0.846980f,
    0.316874f,
    0.456099f,
    0.271889f,
    0.982971f,
    0.297800f,
    0.739189f,
    0.567278f,
    0.195990f,
    0.761315f,
    0.839442f,
    0.397656f,
    0.500900f,
    0.890164f,
    0.027467f,
    0.994629f,
    0.572588f,
    0.050508f,
    0.531327f,
    0.194067f,
    0.843043f,
    0.626759f,
    0.657613f,
    0.197851f,
    0.842158f,
    0.123325f,
    0.109928f,
    0.743126f,
    0.314066f,
    0.941069f,
    0.286081f,
    0.336314f,
    0.140263f,
    0.733085f,
    0.834620f,
    0.707999f,
    0.600238f,
    0.747215f,
    0.252724f,
    0.144475f,
    0.001617f,
    0.061007f,
    0.806238f,
    0.852626f,
    0.210578f,
    0.115604f,
    0.553209f,
    0.014252f,
    0.113773f,
    0.454512f,
    0.752220f,
    0.686148f,
    0.543443f,
    0.073885f,
    0.436720f,
    0.201941f,
    0.696219f,
    0.290353f,
    0.436689f,
    0.232429f,
    0.577868f,
    0.532579f,
    0.628681f,
    0.160192f,
    0.504135f,
    0.963042f,
    0.695761f,
    0.924802f,
    0.189947f,
    0.335948f,
    0.178350f,
    0.995178f,
    0.457442f,
    0.998016f,
    0.097507f,
    0.625172f,
    0.094394f,
    0.437727f,
    0.931516f,
    0.048433f,
    0.894620f,
    0.290017f,
    0.227302f,
    0.769066f,
    0.410718f,
    0.201972f,
    0.628071f,
    0.604144f,
    0.451613f,
    0.466353f,
    0.597827f,
    0.634724f,
    0.854793f,
    0.828791f,
    0.624775f,
    0.720908f,
    0.565752f,
    0.375134f,
    0.184271f,
    0.737907f,
    0.555132f,
    0.905087f,
    0.242866f,
    0.188940f,
    0.604724f,
    0.698508f,
    0.584613f,
    0.351299f,
    0.494461f,
    0.080386f,
    0.740745f,
    0.612049f,
    0.620380f,
    0.691122f,
    0.804529f,
    0.149113f,
    0.576037f,
    0.867733f,
    0.911557f,
    0.614704f,
    0.727683f,
    0.043214f,
    0.667776f,
    0.976531f,
    0.315012f,
    0.569201f,
    0.305826f,
    0.173925f,
    0.108554f,
    0.869045f,
    0.851222f,
    0.744316f,
    0.154881f,
    0.326914f,
    0.079348f,
    0.076601f,
    0.640980f,
    0.820002f,
    0.545091f,
    0.448256f,
    0.408979f,
    0.298746f,
    0.465560f,
    0.501206f,
    0.152654f,
    0.323038f,
    0.737999f,
    0.313883f,
    0.826685f,
    0.959075f,
    0.873348f,
    0.725028f,
    0.300058f,
    0.943999f,
    0.127232f,
    0.065737f,
    0.784967f,
    0.524583f,
    0.609638f,
    0.956114f,
    0.072268f,
    0.875637f,
    0.653859f,
    0.322123f,
    0.104801f,
    0.505051f,
    0.227088f,
    0.290292f,
    0.919980f,
    0.551164f,
    0.662801f,
    0.114536f,
    0.492538f,
    0.379131f,
    0.496811f,
    0.793359f,
    0.509262f,
    0.382366f,
    0.688162f,
    0.532151f,
    0.606281f,
    0.395184f,
    0.005890f,
    0.707877f,
    0.100620f,
    0.623066f,
    0.863247f,
    0.491501f,
    0.747337f,
    0.496902f,
    0.380108f,
    0.785363f,
    0.552812f,
    0.357097f,
    0.955718f,
    0.630848f,
    0.176580f,
    0.374248f,
    0.131626f,
    0.743278f,
    0.951720f,
    0.611988f,
    0.027833f,
    0.329844f,
    0.055910f,
    0.639210f,
    0.131626f,
    0.847072f,
    0.864315f,
    0.596881f,
    0.721641f,
    0.853969f,
    0.014679f,
    0.126469f,
    0.707907f,
    0.617145f,
    0.217566f,
    0.065950f,
    0.168920f,
    0.624104f,
    0.340983f,
    0.319407f,
    0.367565f,
    0.661000f,
    0.802393f,
    0.806879f,
    0.526536f,
    0.611103f,
    0.798181f,
    0.900601f,
    0.144810f,
    0.630177f,
    0.402417f,
    0.253700f,
    0.136540f,
    0.855190f,
    0.066164f,
    0.427808f,
    0.573351f,
    0.302286f,
    0.548051f,
    0.225562f,
    0.311350f,
    0.110630f,
    0.808039f,
    0.134709f,
    0.284249f,
    0.788110f,
    0.895230f,
    0.789636f,
    0.743797f,
    0.615223f,
    0.361126f,
    0.856655f,
    0.228492f,
    0.863582f,
    0.229438f,
    0.249550f,
    0.542405f,
    0.984832f,
    0.053804f,
    0.081423f,
    0.524674f,
    0.426801f,
    0.094668f,
    0.258797f,
    0.891537f,
    0.232765f,
    0.146550f,
    0.125095f,
    0.931639f,
    0.080111f,
    0.047090f,
    0.058718f,
    0.336406f,
    0.914701f,
    0.398602f,
    0.432783f,
    0.946165f,
    0.837184f,
    0.534227f,
    0.842097f,
    0.693533f,
    0.397687f,
    0.259163f,
    0.004334f,
    0.525590f,
    0.954802f,
    0.398694f,
    0.241096f,
    0.585559f,
    0.255135f,
    0.684011f,
    0.945280f,
    0.435499f,
    0.890225f,
    0.007172f,
    0.940977f,
    0.601550f,
    0.786157f,
    0.576678f,
    0.142430f,
    0.222327f,
    0.383007f,
    0.004273f,
    0.417920f,
    0.082247f,
    0.659932f,
    0.855098f,
    0.064852f,
    0.811060f,
    0.662069f,
    0.691488f,
    0.802698f,
    0.530137f,
    0.685629f,
    0.142766f,
    0.689505f,
    0.727897f,
    0.777734f,
    0.031068f,
    0.868679f,
    0.644520f,
    0.706565f,
    0.085452f,
    0.551988f,
    0.947905f,
    0.058779f,
    0.274972f,
    0.145177f,
    0.981780f,
    0.619983f,
    0.292245f,
    0.922483f,
    0.367534f,
    0.694540f,
    0.218635f,
    0.155919f,
    0.240547f,
    0.521439f,
    0.902280f,
    0.106418f,
    0.902646f,
    0.441725f,
    0.080111f,
    0.782098f,
    0.171789f,
    0.974395f,
    0.775872f,
    0.870388f,
    0.210639f,
    0.456618f,
    0.003754f,
    0.750633f,
    0.114048f,
    0.404706f,
    0.311136f,
    0.992615f,
    0.038575f,
    0.252083f,
    0.189276f,
    0.247688f,
    0.153508f,
    0.620319f,
    0.885372f,
    0.939085f,
    0.195654f,
    0.779656f,
    0.645558f,
    0.656758f,
    0.909146f,
    0.455458f,
    0.921293f,
    0.664174f,
    0.150761f,
    0.636341f,
    0.569536f,
    0.422040f,
    0.943022f,
    0.540574f,
    0.578570f,
    0.536454f,
    0.255287f,
    0.396954f,
    0.350261f,
    0.036622f,
    0.795251f,
    0.196509f,
    0.070284f,
    0.389416f,
    0.590747f,
    0.070925f,
    0.197668f,
    0.155889f,
    0.644337f,
    0.454329f,
    0.604297f,
    0.697348f,
    0.441298f,
    0.684469f,
    0.396527f,
    0.835719f,
    0.592212f,
    0.199591f,
    0.949461f,
    0.876003f,
    0.391705f,
    0.987457f,
    0.185308f,
    0.895718f,
    0.574450f,
    0.442061f,
    0.627338f,
    0.708518f,
    0.049623f,
    0.285562f,
    0.260201f,
    0.407636f,
    0.895321f,
    0.710196f,
    0.728446f,
    0.896054f,
    0.393567f,
    0.397412f,
    0.903867f,
    0.308603f,
    0.388104f,
    0.570574f,
    0.353557f,
    0.733696f,
    0.745354f,
    0.736381f,
    0.739433f,
    0.139317f,
    0.200171f,
    0.272591f,
    0.680441f,
    0.911130f,
    0.367840f,
    0.517655f,
    0.109378f,
    0.907437f,
    0.203070f,
    0.517960f,
    0.654836f,
    0.438520f,
    0.687643f,
    0.090426f,
    0.079562f,
    0.075777f,
    0.027802f,
    0.355083f,
    0.307230f,
    0.697287f,
    0.142674f,
    0.394848f,
    0.067843f,
    0.675741f,
    0.724937f,
    0.198706f,
    0.694021f,
    0.615711f,
    0.654897f,
    0.543992f,
    0.098300f,
    0.545366f,
    0.049623f,
    0.974578f,
    0.464034f,
    0.969970f,
    0.727866f,
    0.530961f,
    0.679922f,
    0.692801f,
    0.372112f,
    0.388623f,
    0.049959f,
    0.809778f,
    0.169561f,
    0.060823f,
    0.310556f,
    0.784478f,
    0.212470f,
    0.321909f,
    0.484664f,
    0.009156f,
    0.439863f,
    0.507859f,
    0.605945f,
    0.758538f,
    0.401074f,
    0.349803f,
    0.842647f,
    0.942320f,
    0.623310f,
    0.997284f,
    0.053468f,
    0.562853f,
    0.863552f,
    0.386761f,
    0.306406f,
    0.284219f,
    0.026704f,
    0.612568f,
    0.391186f,
    0.018616f,
    0.031037f,
    0.455702f,
    0.857936f,
    0.936766f,
    0.401898f,
    0.727287f,
    0.611591f,
    0.808374f,
    0.875423f,
    0.582598f,
    0.595019f,
    0.079012f,
    0.793176f,
    0.462203f,
    0.590625f,
    0.589435f,
    0.569201f,
    0.816065f,
    0.672750f,
    0.343577f,
    0.010224f,
    0.267312f,
    0.341563f,
    0.232093f,
    0.771020f,
    0.371746f,
    0.869869f,
    0.116855f,
    0.725578f,
    0.628925f,
    0.893948f,
    0.183020f,
    0.535569f,
    0.902005f,
    0.780084f,
    0.965209f,
    0.197363f,
    0.901547f,
    0.797418f,
    0.953398f,
    0.848811f,
    0.890347f,
    0.628712f,
    0.185461f,
    0.616932f,
    0.264992f,
    0.250649f,
    0.732200f,
    0.788110f,
    0.170934f,
    0.713889f,
    0.480941f,
    0.081484f,
    0.806543f,
    0.855342f,
    0.124638f,
    0.307474f,
    0.573321f,
    0.472976f,
    0.762047f,
    0.191870f,
    0.727775f,
    0.995025f,
    0.015351f,
    0.647633f,
    0.691641f,
    0.174139f,
    0.072115f,
    0.274972f,
    0.676626f,
    0.838923f,
    0.556658f,
    0.371227f,
    0.779504f,
    0.232521f,
    0.638234f,
    0.231666f,
    0.204596f,
    0.971038f,
    0.281747f,
    0.022889f,
    0.769219f,
    0.151830f,
    0.046968f,
    0.009247f,
    0.348582f,
    0.643880f,
    0.343242f,
    0.414563f,
    0.416517f,
    0.090670f,
    0.545183f,
    0.699271f,
    0.337992f,
    0.657521f,
    0.876247f,
    0.535478f,
    0.570025f,
    0.053987f,
    0.465773f,
    0.259987f,
    0.426801f,
    0.863338f,
    0.486587f,
    0.087436f,
    0.565813f,
    0.709403f,
    0.778466f,
    0.864223f,
    0.850551f,
    0.293008f,
    0.864376f,
    0.644917f,
    0.746849f,
    0.828639f,
    0.765618f,
    0.871914f,
    0.908322f,
    0.912534f,
    0.521958f,
    0.440168f,
    0.107639f,
    0.354015f,
    0.823054f,
    0.427717f,
    0.169836f,
    0.000855f,
    0.657460f,
    0.773553f,
    0.063723f,
    0.089816f,
    0.385662f,
    0.683889f,
    0.807611f,
    0.154088f,
    0.142857f,
    0.048463f,
    0.346141f,
    0.018555f,
    0.978423f,
    0.647633f,
    0.053652f,
    0.914151f,
    0.637471f,
    0.431715f,
    0.021058f,
    0.242592f,
    0.391949f,
    0.654012f,
    0.781884f,
    0.022828f,
    0.826044f,
    0.138432f,
    0.634266f,
    0.550401f,
    0.983490f,
    0.463424f,
    0.214789f,
    0.300699f,
    0.782159f,
    0.342540f,
    0.480605f,
    0.608020f,
    0.102512f,
    0.984436f,
    0.755821f,
    0.150884f,
    0.456404f,
    0.711631f,
    0.998749f,
    0.775506f,
    0.641652f,
    0.621204f,
    0.946104f,
    0.688162f,
    0.289804f,
    0.567156f,
    0.290384f,
    0.548235f,
    0.712363f,
    0.246437f,
    0.546678f,
    0.492630f,
    0.952055f,
    0.669820f,
    0.765160f,
    0.623371f,
    0.445753f,
    0.798761f,
    0.745537f,
    0.988922f,
    0.204627f,
    0.629475f,
    0.909818f,
    0.591296f,
    0.918393f,
    0.505539f,
    0.489395f,
    0.449721f,
    0.889340f,
    0.940397f,
    0.182928f,
    0.251961f,
    0.203009f,
    0.730491f,
    0.941130f,
    0.625080f,
    0.041353f,
    0.641346f,
    0.034516f,
    0.556352f,
    0.544481f,
    0.446333f,
    0.061373f,
    0.996033f,
    0.127750f,
    0.600909f,
    0.050356f,
    0.172796f,
    0.660237f,
    0.332438f,
    0.315958f,
    0.653584f,
    0.410535f,
    0.427503f,
    0.221625f,
    0.678518f,
    0.166448f,
    0.497543f,
    0.507645f,
    0.802728f,
    0.435072f,
    0.004517f,
    0.339488f,
    0.375896f,
    0.128574f,
    0.827326f,
    0.733299f,
    0.891140f,
    0.643330f,
    0.650594f,
    0.514481f,
    0.733970f,
    0.737175f,
    0.957091f,
    0.465835f,
    0.363262f,
    0.112186f,
    0.904660f,
    0.821223f,
    0.454787f,
    0.108676f,
    0.869442f,
    0.761376f,
    0.039125f,
    0.416669f,
    0.936125f,
    0.067751f,
    0.164861f,
    0.211280f,
    0.116916f,
    0.591113f,
    0.118351f,
    0.618275f,
    0.580096f,
    0.690298f,
    0.731559f,
    0.915647f,
    0.669729f,
    0.298502f,
    0.808863f,
    0.378185f,
    0.997497f,
    0.772515f,
    0.204413f,
    0.170568f,
    0.388256f,
    0.181219f,
    0.580981f,
    0.195624f,
    0.960143f,
    0.190252f,
    0.381726f,
    0.303995f,
    0.120823f,
    0.198157f,
    0.046236f,
    0.771172f,
    0.761040f,
    0.881039f,
    0.001770f,
    0.448622f,
    0.426374f,
    0.801538f,
    0.461348f,
    0.494858f,
    0.749382f,
    0.238502f,
    0.559404f,
    0.092746f,
    0.922025f,
    0.893826f,
    0.857021f,
    0.059633f,
    0.490890f,
    0.632038f,
    0.747215f,
    0.756066f,
    0.255745f,
    0.909909f,
    0.791986f,
    0.199622f,
    0.552843f,
    0.051241f,
    0.522172f,
    0.790368f,
    0.704154f,
    0.024049f,
    0.731742f,
    0.553362f,
    0.914212f,
    0.875546f,
    0.796930f,
    0.305429f,
    0.394940f,
    0.481887f,
    0.052583f,
    0.651967f,
    0.000855f,
    0.768578f,
    0.756188f,
    0.219733f,
    0.154759f,
    0.057527f,
    0.670614f,
    0.032685f,
    0.345866f,
    0.697867f,
    0.798151f,
    0.436262f,
    0.981719f,
    0.635548f,
    0.295297f,
    0.476974f,
    0.874355f,
    0.079287f,
    0.100986f,
    0.143223f,
    0.143010f,
    0.917997f,
    0.308725f,
    0.373821f,
    0.813837f,
    0.046632f,
    0.814203f,
    0.239998f,
    0.897885f,
    0.256508f,
    0.269356f,
    0.208014f,
    0.229377f,
    0.846156f,
    0.874844f,
    0.887692f,
    0.844783f,
    0.609272f,
    0.040895f,
    0.173528f,
    0.183752f,
    0.355907f,
    0.449263f,
    0.185064f,
    0.894467f,
    0.623035f,
    0.546342f,
    0.911679f,
    0.522599f,
    0.730644f,
    0.999329f,
    0.969329f,
    0.867428f,
    0.840205f,
    0.146672f,
    0.374401f,
    0.284371f,
    0.170965f,
    0.973754f,
    0.741813f,
    0.716605f,
    0.030885f,
    0.645039f,
    0.812708f,
    0.735923f,
    0.818171f,
    0.124638f,
    0.718894f,
    0.375072f,
    0.649831f,
    0.915433f,
    0.889676f,
    0.032167f,
    0.773492f,
    0.448866f,
    0.007569f,
    0.228614f,
    0.418470f,
    0.156590f,
    0.919034f,
    0.501694f,
    0.242866f,
    0.754479f,
    0.906522f,
    0.213477f,
    0.032105f,
    0.771172f,
    0.228248f,
    0.556597f,
    0.806391f,
    0.852016f,
    0.331614f,
    0.538926f,
    0.991791f,
    0.869350f,
    0.646870f,
    0.227729f,
    0.812799f,
    0.371044f,
    0.366894f,
    0.034974f,
    0.561296f,
    0.397870f,
    0.119785f,
    0.324931f,
    0.899014f,
    0.201483f,
    0.940184f,
    0.125065f,
    0.849330f,
    0.893948f,
    0.445570f,
    0.222114f,
    0.634754f,
    0.560076f,
    0.624043f,
    0.423658f,
    0.016480f,
    0.864132f,
    0.139622f,
    0.267403f,
    0.291971f,
    0.681661f,
    0.561449f,
    0.958831f,
    0.607227f,
    0.788232f,
    0.422712f,
    0.818384f,
    0.739464f,
    0.135777f,
    0.516526f,
    0.020081f,
    0.006989f,
    0.748314f,
    0.333872f,
    0.902127f,
    0.462264f,
    0.767907f,
    0.050508f,
    0.630970f,
    0.024171f,
    0.682424f,
    0.969085f,
    0.500443f,
    0.706381f,
    0.265938f,
    0.822352f,
    0.646626f,
    0.597217f,
    0.263619f,
    0.844234f,
    0.460067f,
    0.748161f,
    0.351604f,
    0.014496f,
    0.476547f,
    0.626484f,
    0.403882f,
    0.383618f,
    0.027619f,
    0.288827f,
    0.596851f,
    0.883877f,
    0.432173f,
    0.931547f,
    0.382977f,
    0.533128f,
    0.010071f,
    0.974242f,
    0.865200f,
    0.437422f,
    0.699637f,
    0.332957f,
    0.602344f,
    0.498550f,
    0.559618f,
    0.039003f,
    0.378216f,
    0.233039f,
    0.937346f,
    0.859523f,
    0.964110f,
    0.608814f,
    0.583972f,
    0.076449f,
    0.407025f,
    0.305307f,
    0.498581f,
    0.080050f,
    0.874783f,
    0.304270f,
    0.781518f,
    0.932890f,
    0.588427f,
    0.216224f,
    0.279305f,
    0.560717f,
    0.874416f,
    0.250069f,
    0.301401f,
    0.727134f,
    0.866604f,
    0.231086f,
    0.190710f,
    0.446791f,
    0.890347f,
    0.574328f,
    0.028779f,
    0.995239f,
    0.059236f,
    0.619190f,
    0.256935f,
    0.169836f,
    0.116123f,
    0.231483f,
    0.494888f,
    0.959807f,
    0.049287f,
    0.079623f,
    0.337657f,
    0.279733f,
    0.515549f,
    0.490555f,
    0.412275f,
    0.924711f,
    0.601062f,
    0.292154f,
    0.475753f,
    0.401654f,
    0.951323f,
    0.548357f,
    0.834925f,
    0.794427f,
    0.801660f,
    0.592853f,
    0.870083f,
    0.318064f,
    0.939177f,
    0.267922f,
    0.943327f,
    0.718772f,
    0.127628f,
    0.774895f,
    0.472884f,
    0.175909f,
    0.026673f,
    0.041627f,
    0.454787f,
    0.862300f,
    0.136113f,
    0.014466f,
    0.212775f,
    0.818537f,
    0.797204f,
    0.779656f,
    0.658498f,
    0.298746f,
    0.781426f,
    0.921506f,
    0.842128f,
    0.242622f,
    0.498764f,
    0.023011f,
    0.075716f,
    0.030885f,
    0.356212f,
    0.715323f,
    0.409803f,
    0.180425f,
    0.297922f,
    0.182104f,
    0.744896f,
    0.134739f,
    0.058229f,
    0.525620f,
    0.358867f,
    0.806726f,
    0.158818f,
    0.899869f,
    0.131809f,
    0.029237f,
    0.181433f,
    0.818079f,
    0.249214f,
    0.570696f,
    0.346904f,
    0.539933f,
    0.664907f,
    0.870754f,
    0.932524f,
    0.945280f,
    0.105197f,
    0.153233f,
    0.557970f,
    0.800256f,
    0.895138f,
    0.072512f,
    0.872311f,
    0.822413f,
    0.388287f,
    0.548784f,
    0.671957f,
    0.450942f,
    0.281381f,
    0.949461f,
    0.982147f,
    0.728050f,
    0.594806f,
    0.272378f,
    0.131962f,
    0.197943f,
    0.600513f,
    0.487350f,
    0.355327f,
    0.229926f,
    0.478439f,
    0.691794f,
    0.948149f,
    0.671133f,
    0.982574f,
    0.237526f,
    0.513565f,
    0.235817f,
    0.898038f,
    0.484359f,
    0.326456f,
    0.537492f,
    0.570788f,
    0.336528f,
    0.348155f,
    0.169225f,
    0.290170f,
    0.219275f,
    0.922819f,
    0.739677f,
    0.807001f,
    0.650441f,
    0.686697f,
    0.270089f,
    0.766869f,
    0.064425f,
    0.721763f,
    0.859066f,
    0.341563f,
    0.044374f,
    0.484298f,
    0.020783f,
    0.838191f,
    0.618519f,
    0.540574f,
    0.604053f,
    0.568682f,
    0.777367f,
    0.640034f,
    0.696738f,
    0.759941f,
    0.868007f,
    0.157994f,
    0.423505f,
    0.786462f,
    0.021424f,
    0.438368f,
    0.042146f,
    0.506302f,
    0.269265f,
    0.068270f,
    0.244850f,
    0.982055f,
    0.506455f,
    0.615528f,
    0.071017f,
    0.367504f,
    0.955535f,
    0.860073f,
    0.337474f,
    0.241890f,
    0.289529f,
    0.050966f,
    0.992706f,
    0.172460f,
    0.068911f,
    0.220130f,
    0.300912f,
    0.786859f,
    0.649617f,
    0.083682f,
    0.262764f,
    0.136479f,
    0.217536f,
    0.562578f,
    0.178259f,
    0.632282f,
    0.106906f,
    0.453719f,
    0.758843f,
    0.333811f,
    0.057405f,
    0.282510f,
    0.694296f,
    0.873257f,
    0.567583f,
    0.868496f,
    0.081210f,
    0.795404f,
    0.999664f,
    0.634999f,
    0.618854f,
    0.594775f,
    0.593127f,
    0.194250f,
    0.978881f,
    0.231513f,
    0.042299f,
    0.239051f,
    0.255135f,
    0.406812f,
    0.794946f,
    0.272469f,
    0.900052f,
    0.379437f,
    0.727561f,
    0.206488f,
    0.052950f,
    0.604572f,
    0.353984f,
    0.361248f,
    0.668111f,
    0.976043f,
    0.223640f,
    0.895779f,
    0.346965f,
    0.953520f,
    0.665120f,
    0.201666f,
    0.282357f,
    0.355449f,
    0.531999f,
    0.290994f,
    0.219977f,
    0.099612f,
    0.106723f,
    0.709342f,
    0.843806f,
    0.671865f,
    0.819147f,
    0.005768f,
    0.491348f,
    0.604633f,
    0.935331f,
    0.290628f,
    0.605823f,
    0.746910f,
    0.873836f,
    0.912229f,
    0.830103f,
    0.605914f,
    0.304880f,
    0.784234f,
    0.150121f,
    0.542619f,
    0.689047f,
    0.394635f,
    0.993194f,
    0.101932f,
    0.411603f,
    0.027436f,
    0.687429f,
    0.258889f,
    0.169012f,
    0.228645f,
    0.189001f,
    0.862209f,
    0.763298f,
    0.047609f,
    0.483230f,
    0.056154f,
    0.961241f,
    0.084994f,
    0.565477f,
    0.962554f,
    0.573901f,
    0.878658f,
    0.408704f,
    0.403150f,
    0.413495f,
    0.658528f,
    0.823359f,
    0.945189f,
    0.283120f,
    0.002228f,
    0.616260f,
    0.049440f,
    0.656056f,
    0.421949f,
    0.954497f,
    0.603961f,
    0.200873f,
    0.414380f,
    0.340556f,
    0.623127f,
    0.808405f,
    0.004852f,
    0.105258f,
    0.394421f,
    0.276864f,
    0.316782f,
    0.824244f,
    0.853511f,
    0.311533f,
    0.197668f,
    0.564684f,
    0.469069f,
    0.995117f,
    0.433241f,
    0.368480f,
    0.418775f,
    0.384869f,
    0.580432f,
    0.877743f,
    0.337413f,
    0.393384f,
    0.951048f,
    0.509140f,
    0.418592f,
    0.608295f,
    0.776757f,
    0.083651f,
    0.151189f,
    0.207923f,
    0.087344f,
    0.317270f,
    0.471816f,
    0.629139f,
    0.332774f,
    0.079318f,
    0.614521f,
    0.142827f,
    0.280709f,
    0.824976f,
    0.439070f,
    0.994415f,
    0.220954f,
    0.107334f,
    0.518998f,
    0.264595f,
    0.007355f,
    0.576250f,
    0.770562f,
    0.107517f,
    0.969207f,
    0.369427f,
    0.903989f,
    0.521714f,
    0.222663f,
    0.302622f,
    0.478469f,
    0.310617f,
    0.414411f,
    0.764733f,
    0.841609f,
    0.389111f,
    0.427473f,
    0.724174f,
    0.734916f,
    0.091403f,
    0.081729f,
    0.753075f,
    0.846980f,
    0.637806f,
    0.359630f,
    0.475021f,
    0.094394f,
    0.415296f,
    0.188360f,
    0.343120f,
    0.913388f,
    0.229316f,
    0.310312f,
    0.154271f,
    0.341533f,
    0.182287f,
    0.272286f,
    0.205939f,
    0.172460f,
    0.335276f,
    0.065432f,
    0.501907f,
    0.963683f,
    0.809259f,
    0.446455f,
    0.912992f,
    0.179266f,
    0.481918f,
    0.472091f,
    0.699240f,
    0.248604f,
    0.936705f,
    0.277444f,
    0.299539f,
    0.822443f,
    0.819636f,
    0.629902f,
    0.795068f,
    0.007202f,
    0.260964f,
    0.289529f,
    0.952971f,
    0.859462f,
    0.517441f,
    0.707511f,
    0.256172f,
    0.921049f,
    0.491256f,
    0.093539f,
    0.825983f,
    0.076693f,
    0.282632f,
    0.383862f,
    0.643269f,
    0.515091f,
    0.431532f,
    0.140721f,
    0.974975f,
    0.074618f,
    0.005188f,
    0.914792f,
    0.411664f,
    0.755333f,
    0.187658f,
    0.101718f,
    0.423139f,
    0.677938f,
    0.527421f,
    0.824213f,
    0.837184f,
    0.271493f,
    0.499496f,
    0.870449f,
    0.148991f,
    0.970794f,
    0.538377f,
    0.220679f,
    0.066744f,
    0.204627f,
    0.197729f,
    0.192907f,
    0.199530f,
    0.956786f,
    0.593493f,
    0.738792f,
    0.294382f,
    0.679830f,
    0.786126f,
    0.921323f,
    0.928434f,
    0.844325f,
    0.258980f,
    0.105441f,
    0.061892f,
    0.903775f,
    0.148320f,
    0.892758f,
    0.359416f,
    0.956694f,
    0.381573f,
    0.331462f,
    0.684561f,
    0.887539f,
    0.380108f,
    0.433271f,
    0.674642f,
    0.267098f,
    0.482833f,
    0.527848f,
    0.802057f,
    0.794122f,
    0.746330f,
    0.486679f,
    0.827784f,
    0.559038f,
    0.278787f,
    0.347179f,
    0.054140f,
    0.911252f,
    0.762902f,
    0.368480f,
    0.282388f,
    0.211249f,
    0.324564f,
    0.050142f,
    0.881619f,
    0.248817f,
    0.403821f,
    0.144871f,
    0.875271f,
    0.608112f,
    0.783654f,
    0.196844f,
    0.451704f,
    0.761773f,
    0.433332f,
    0.636464f,
    0.804559f,
    0.174444f,
    0.322672f,
    0.963195f,
    0.709403f,
    0.197546f,
    0.862880f,
    0.047304f,
    0.743217f,
    0.036042f,
    0.130833f,
    0.082369f,
    0.552690f,
    0.568957f,
    0.533006f,
    0.218879f,
    0.077181f,
    0.304605f,
    0.064455f,
    0.411267f,
    0.133702f,
    0.251686f,
    0.820643f,
    0.508774f,
    0.268715f,
    0.987945f,
    0.916532f,
    0.121738f,
    0.284433f,
    0.706961f,
    0.470931f,
    0.294748f,
    0.344646f,
    0.525101f,
    0.811121f,
    0.517228f,
    0.067324f,
    0.829218f,
    0.554399f,
    0.103641f,
    0.509568f,
    0.946684f,
    0.723106f,
    0.473922f,
    0.451308f,
    0.918882f,
    0.548845f,
    0.365276f,
    0.884365f,
    0.659719f,
    0.122532f,
    0.507401f,
    0.112430f,
    0.279794f,
    0.546464f,
    0.791284f,
    0.369182f,
    0.858119f,
    0.744346f,
    0.463851f,
    0.359661f,
    0.442091f,
    0.585925f,
    0.379040f,
    0.632038f,
    0.557604f,
    0.482589f,
    0.836665f,
    0.185705f,
    0.009705f,
    0.109256f,
    0.040620f,
    0.221778f,
    0.255959f,
    0.410291f,
    0.707602f,
    0.442732f,
    0.133061f,
    0.544053f,
    0.856777f,
    0.806635f,
    0.218268f,
    0.923826f,
    0.313364f,
    0.143223f,
    0.606861f,
    0.010285f,
    0.955565f,
    0.537248f,
    0.386883f,
    0.012391f,
    0.237068f,
    0.885708f,
    0.592456f,
    0.152593f,
    0.016541f,
    0.535203f,
    0.916715f,
    0.652730f,
    0.224464f,
    0.405560f,
    0.965819f,
    0.097079f,
    0.399579f,
    0.506119f,
    0.335307f,
    0.328410f,
    0.625416f,
    0.250771f,
    0.289956f,
    0.533525f,
    0.898679f,
    0.478072f,
    0.328166f,
    0.674581f,
    0.460341f,
    0.582751f,
    0.412763f,
    0.922300f,
    0.120975f,
    0.664724f,
    0.148686f,
    0.247383f,
    0.111576f,
    0.102023f,
    0.689505f,
    0.826441f,
    0.490738f,
    0.453749f,
    0.653432f,
    0.418500f,
    0.639912f,
    0.099216f,
    0.830592f,
    0.368633f,
    0.877957f,
    0.520035f,
    0.962279f,
    0.394696f,
    0.725700f,
    0.630604f,
    0.374126f,
    0.813410f,
    0.852565f,
    0.063936f,
    0.743584f,
    0.362377f,
    0.235603f,
    0.818964f,
    0.783715f,
    0.273934f,
    0.563219f,
    0.174718f,
    0.124241f,
    0.757103f,
    0.413800f,
    0.279427f,
    0.170965f,
    0.544206f,
    0.241249f,
    0.318613f,
    0.225074f,
    0.658040f,
    0.698416f,
    0.670247f,
    0.643330f,
    0.056032f,
    0.329508f,
    0.952239f,
    0.320688f,
    0.307627f,
    0.162969f,
    0.368542f,
    0.276437f,
    0.961119f,
    0.236213f,
    0.260811f,
    0.624836f,
    0.756035f,
    0.582812f,
    0.271004f,
    0.712149f,
    0.337901f,
    0.714133f,
    0.021577f,
    0.700552f,
    0.630696f,
    0.126377f,
    0.719871f,
    0.380902f,
    0.523942f,
    0.864132f,
    0.591937f,
    0.495163f,
    0.030793f,
    0.671773f,
    0.553484f,
    0.349590f,
    0.572588f,
    0.764275f,
    0.022645f,
    0.000641f,
    0.546953f,
    0.748070f,
    0.282235f,
    0.794031f,
    0.835231f,
    0.723808f,
    0.296457f,
    0.538652f,
    0.405591f,
    0.101779f,
    0.389386f,
    0.096713f,
    0.668203f,
    0.161840f,
    0.690939f,
    0.670766f,
    0.738517f,
    0.888241f,
    0.756584f,
    0.569506f,
    0.264931f,
    0.111454f,
    0.267129f,
    0.733451f,
    0.977477f,
    0.487899f,
    0.214911f,
    0.801202f,
    0.612903f,
    0.348521f,
    0.482620f,
    0.998505f,
    0.373669f,
    0.947996f,
    0.220618f,
    0.630268f,
    0.575701f,
    0.145543f,
    0.929899f,
    0.457930f,
    0.642323f,
    0.048647f,
    0.655751f,
    0.742393f,
    0.099979f,
    0.650746f,
    0.199591f,
    0.234352f,
    0.732139f,
    0.994537f,
    0.754112f,
    0.893307f,
    0.547655f,
    0.891781f,
    0.868862f,
    0.615955f,
    0.719901f,
    0.731071f,
    0.151921f,
    0.756218f,
    0.152776f,
    0.404736f,
    0.614490f,
    0.716788f,
    0.829981f,
    0.886044f,
    0.063723f,
    0.394757f,
    0.603626f,
    0.488083f,
    0.451369f,
    0.761803f,
    0.578784f,
    0.335734f,
    0.583056f,
    0.360332f,
    0.749748f,
    0.081454f,
    0.095645f,
    0.997070f,
    0.044465f,
    0.396680f,
    0.108188f,
    0.414960f,
    0.433912f,
    0.269723f,
    0.453017f,
    0.224982f,
    0.261330f,
    0.641743f,
    0.893094f,
    0.878964f,
    0.449324f,
    0.411695f,
    0.232063f,
    0.964415f,
    0.739372f,
    0.341716f,
    0.723045f,
    0.603381f,
    0.621448f,
    0.894223f,
    0.682485f,
    0.235633f,
    0.108798f,
    0.531663f,
    0.715506f,
    0.567949f,
    0.015107f,
    0.510910f,
    0.458449f,
    0.970855f,
    0.889645f,
    0.702384f,
    0.245827f,
    0.103549f,
    0.266671f,
    0.466292f,
    0.606769f,
    0.049074f,
    0.386181f,
    0.116642f,
    0.998169f,
    0.739921f,
    0.040834f,
    0.004395f,
    0.680258f,
    0.956420f,
    0.706626f,
    0.750877f,
    0.141087f,
    0.678274f,
    0.612751f,
    0.662984f,
    0.976012f,
    0.071108f,
    0.907407f,
    0.861324f,
    0.628498f,
    0.889004f,
    0.575152f,
    0.152196f,
    0.898618f,
    0.573901f,
    0.262947f,
    0.175481f,
    0.625294f,
    0.834315f,
    0.670278f,
    0.858638f,
    0.448531f,
    0.982971f,
    0.660115f,
    0.708762f,
    0.058229f,
    0.815973f,
    0.746910f,
    0.974151f,
    0.835353f,
    0.314127f,
    0.117649f,
    0.205512f,
    0.291787f,
    0.947783f,
    0.842494f,
    0.249763f,
    0.215918f,
};

} // namespace Util
