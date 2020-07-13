#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InnerSetItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InnerSetItem"));
	}

	template <typename T = uintptr_t> T& Parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ItemTrans() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AnimNameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CorssSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AnimIconSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& WinCircleMark() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& Guid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnClick(uintptr_t go) {
		return ((T (*)(InnerSetItem*, uintptr_t))(Il2CppBase() + 0x232A368))(this, go);
	}
	template <typename T = void> T OnPress(uintptr_t go, bool isPress) {
		return ((T (*)(InnerSetItem*, uintptr_t, bool))(Il2CppBase() + 0x232A42C))(this, go, isPress);
	}

};

}
