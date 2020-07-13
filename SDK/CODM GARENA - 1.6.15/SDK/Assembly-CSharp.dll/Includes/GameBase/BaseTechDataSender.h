#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BaseTechDataSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BaseTechDataSender"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRawData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SendRawData(Il2CppString* name, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventList) {
		return ((T (*)(BaseTechDataSender*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x372AEEC))(this, name, eventList);
	}

};

}
