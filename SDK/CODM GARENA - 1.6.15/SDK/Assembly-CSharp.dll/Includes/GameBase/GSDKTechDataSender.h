#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GSDKTechDataSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GSDKTechDataSender"));
	}


	template <typename T = void> T SendRawData(Il2CppString* name, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventList) {
		return ((T (*)(GSDKTechDataSender*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1ED8078))(this, name, eventList);
	}

};

}
