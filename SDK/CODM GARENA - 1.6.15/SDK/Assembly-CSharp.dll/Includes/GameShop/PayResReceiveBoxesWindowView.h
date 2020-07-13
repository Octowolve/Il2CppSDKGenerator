#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class PayResReceiveBoxesWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "PayResReceiveBoxesWindowView"));
	}

	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ConfirmButton() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& GoodName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& GoodNum() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GoodIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector2> T& GoodIconFit() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SmallGoodIcon() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector2> T& SmallIconFit() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> static T& kTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BindData(uintptr_t viewMode) {
		return ((T (*)(PayResReceiveBoxesWindowView*, uintptr_t))(Il2CppBase() + 0x235851C))(this, viewMode);
	}
	template <typename T = void> T ConfigureContent(uint32_t resourceID, int32_t number) {
		return ((T (*)(PayResReceiveBoxesWindowView*, uint32_t, int32_t))(Il2CppBase() + 0x235904C))(this, resourceID, number);
	}

};

}
