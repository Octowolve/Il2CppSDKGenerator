#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWrapContentNew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWrapContentNew"));
	}

	template <typename T = int32_t> T& itemSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& cullContent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& minIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& maxIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hideInactive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& onInitializeItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Panel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mHorizontal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mFirstTime() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChildren() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortBasedOnScrollMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAlphabetically() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChildPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsParamValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x42079C4))(this);
	}
	template <typename T = void> T OnMove(uintptr_t panel) {
		return ((T (*)(UIWrapContentNew*, uintptr_t))(Il2CppBase() + 0x4207C80))(this, panel);
	}
	template <typename T = void> T SortBasedOnScrollMovement() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x4207D38))(this);
	}
	template <typename T = void> T SortAlphabetically() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x42082A0))(this);
	}
	template <typename T = bool> T CacheScrollView() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x4208050))(this);
	}
	template <typename T = void> T ResetChildPositions() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x4208510))(this);
	}
	template <typename T = bool> T IsParamValid() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x42086FC))(this);
	}
	template <typename T = void> T WrapContent() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x420897C))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UIWrapContentNew*))(Il2CppBase() + 0x4209394))(this);
	}
	template <typename T = void> T UpdateItem(uintptr_t item, int32_t index) {
		return ((T (*)(UIWrapContentNew*, uintptr_t, int32_t))(Il2CppBase() + 0x420944C))(this, item, index);
	}

};

}
