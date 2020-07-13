#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ZMGoldAddNumberMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ZMGoldAddNumberMgr"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NumberItemList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMGoldAddNumberMgr*))(Il2CppBase() + 0x49EE490))(this);
	}
	template <typename T = uintptr_t> T GetItem() {
		return ((T (*)(ZMGoldAddNumberMgr*))(Il2CppBase() + 0x49EE57C))(this);
	}

};

}
