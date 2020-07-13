#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutItemDescCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutItemDescCell"));
	}

	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetData(Il2CppString* descText, Il2CppString* descSprite, int32_t colorId) {
		return ((T (*)(LoadoutItemDescCell*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1A545B8))(this, descText, descSprite, colorId);
	}

};

}
