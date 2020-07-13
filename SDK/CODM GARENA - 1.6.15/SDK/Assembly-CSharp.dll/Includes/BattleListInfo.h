#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleListInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleListInfo"));
	}

	template <typename T = int32_t> T& PageIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& PageCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BattleInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& WaitingForData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasData() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T NeedUpdate() {
		return ((T (*)(BattleListInfo*))(Il2CppBase() + 0x39349C4))(this);
	}

};

}
