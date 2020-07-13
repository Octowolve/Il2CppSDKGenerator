#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIEventListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIEventListener"));
	}

	template <typename T = uintptr_t> T& parameter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& onSubmit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onClick() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& onDoubleClick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onHover() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& onPress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onSelect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& onScroll() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& onDragStart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& onDrag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onDragOver() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& onDragOut() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onDragEnd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& onDrop() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onKey() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& onTooltip() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onLongPress() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& onClickForTLog() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& cacheCollider() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTooltip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E7B80))(this);
	}
	template <typename T = void> T OnSubmit() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E7CE4))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E7E54))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E7F40))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIEventListener*, bool))(Il2CppBase() + 0x39E8018))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIEventListener*, bool))(Il2CppBase() + 0x39E81C0))(this, isPressed);
	}
	template <typename T = void> T OnSelect(bool selected) {
		return ((T (*)(UIEventListener*, bool))(Il2CppBase() + 0x39E82A4))(this, selected);
	}
	template <typename T = void> T OnScroll(float delta) {
		return ((T (*)(UIEventListener*, float))(Il2CppBase() + 0x39E8388))(this, delta);
	}
	template <typename T = void> T OnDragStart() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E8530))(this);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIEventListener*, Il2CppVector2))(Il2CppBase() + 0x39E85F4))(this, delta);
	}
	template <typename T = void> T OnDragOver() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E87BC))(this);
	}
	template <typename T = void> T OnDragOut() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E8894))(this);
	}
	template <typename T = void> T OnDragEnd() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E896C))(this);
	}
	template <typename T = void> T OnDrop(uintptr_t go) {
		return ((T (*)(UIEventListener*, uintptr_t))(Il2CppBase() + 0x39E8A30))(this, go);
	}
	template <typename T = void> T OnKey(uintptr_t key) {
		return ((T (*)(UIEventListener*, uintptr_t))(Il2CppBase() + 0x39E8BD8))(this, key);
	}
	template <typename T = void> T OnTooltip(bool show) {
		return ((T (*)(UIEventListener*, bool))(Il2CppBase() + 0x39E8D80))(this, show);
	}
	template <typename T = void> T OnLongPress() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E8E64))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UIEventListener*))(Il2CppBase() + 0x39E8F3C))(this);
	}
	template <typename T = uintptr_t> static T Get(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39D3400))(0, go);
	}

};

}
