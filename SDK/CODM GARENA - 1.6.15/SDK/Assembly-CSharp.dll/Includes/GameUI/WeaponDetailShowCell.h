#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WeaponDetailShowCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WeaponDetailShowCell"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DescRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ItemGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetData(Il2CppList<uintptr_t>* dataList, int32_t weaponLv) {
		return ((T (*)(WeaponDetailShowCell*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x2A2DCCC))(this, dataList, weaponLv);
	}

};

}
