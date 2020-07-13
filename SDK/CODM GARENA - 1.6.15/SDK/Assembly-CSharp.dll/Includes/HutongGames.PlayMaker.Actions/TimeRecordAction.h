#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TimeRecordAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TimeRecordAction"));
	}

	template <typename T = uintptr_t> T& RecordType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Record() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TimeRecordAction*))(Il2CppBase() + 0x4F17B64))(this);
	}

};

}
