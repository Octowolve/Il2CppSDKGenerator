#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class BaseDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "BaseDataAgent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseResponseFromMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T ParseResponseFromMessage(uintptr_t message) {
		return ((T (*)(BaseDataAgent*, uintptr_t))(Il2CppBase() + 0x334D290))(this, message);
	}

};

}
