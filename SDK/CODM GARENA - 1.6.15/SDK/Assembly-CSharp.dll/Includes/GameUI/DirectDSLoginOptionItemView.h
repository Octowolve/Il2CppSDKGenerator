#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DirectDSLoginOptionItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DirectDSLoginOptionItemView"));
	}

	template <typename T = uintptr_t> T& m_Title() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DirectDSLoginOptionItemView*))(Il2CppBase() + 0x46ED0F0))(this);
	}
	template <typename T = void> T SetData(Il2CppString* data) {
		return ((T (*)(DirectDSLoginOptionItemView*, Il2CppString*))(Il2CppBase() + 0x46EC994))(this, data);
	}
	template <typename T = void> T SetHide(int32_t index) {
		return ((T (*)(DirectDSLoginOptionItemView*, int32_t))(Il2CppBase() + 0x46ECBF4))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DirectDSLoginOptionItemView*))(Il2CppBase() + 0x46ED198))(this);
	}

};

}
