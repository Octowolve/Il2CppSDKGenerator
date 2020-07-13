#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClientRuntimeInfoEachMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClientRuntimeInfo_EachMap"));
	}

	template <typename T = int32_t> T& m_MapID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(ClientRuntimeInfoEachMap*))(Il2CppBase() + 0x3C6FDD4))(this);
	}

};

}
