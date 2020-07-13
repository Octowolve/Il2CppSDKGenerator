#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetJointBreakInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetJointBreakInfo"));
	}

	template <typename T = uintptr_t> T& breakForce() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetJointBreakInfo*))(Il2CppBase() + 0x508D978))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetJointBreakInfo*))(Il2CppBase() + 0x508D984))(this);
	}

};

}
