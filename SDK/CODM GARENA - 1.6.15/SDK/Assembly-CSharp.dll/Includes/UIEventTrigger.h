#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIEventTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIEventTrigger"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onHoverOver() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onHoverOut() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onPress() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onRelease() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onSelect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDeselect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onClick() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDoubleClick() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDragStart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDragEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDragOver() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDragOut() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDrag() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIEventTrigger*))(Il2CppBase() + 0x39E9604))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIEventTrigger*, bool))(Il2CppBase() + 0x39E9700))(this, isOver);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UIEventTrigger*, bool))(Il2CppBase() + 0x39E98BC))(this, pressed);
	}
	template <typename T = void> T OnSelect(bool selected) {
		return ((T (*)(UIEventTrigger*, bool))(Il2CppBase() + 0x39E9A78))(this, selected);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIEventTrigger*))(Il2CppBase() + 0x39E9C34))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIEventTrigger*))(Il2CppBase() + 0x39E9DB4))(this);
	}
	template <typename T = void> T OnDragStart() {
		return ((T (*)(UIEventTrigger*))(Il2CppBase() + 0x39E9F34))(this);
	}
	template <typename T = void> T OnDragEnd() {
		return ((T (*)(UIEventTrigger*))(Il2CppBase() + 0x39EA0A4))(this);
	}
	template <typename T = void> T OnDragOver(uintptr_t go) {
		return ((T (*)(UIEventTrigger*, uintptr_t))(Il2CppBase() + 0x39EA214))(this, go);
	}
	template <typename T = void> T OnDragOut(uintptr_t go) {
		return ((T (*)(UIEventTrigger*, uintptr_t))(Il2CppBase() + 0x39EA39C))(this, go);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIEventTrigger*, Il2CppVector2))(Il2CppBase() + 0x39EA524))(this, delta);
	}

};

}
