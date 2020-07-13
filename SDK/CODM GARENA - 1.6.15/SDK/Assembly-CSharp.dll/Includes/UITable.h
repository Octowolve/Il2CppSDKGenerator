#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UITable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITable"));
	}

	template <typename T = int32_t> T& columns() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sorting() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& pivot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cellAlignment() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hideInactive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& considerChildren() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& keepWithinPanel() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = Il2CppVector2> T& padding() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& onReposition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_maxOffsetValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isInitPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& cachePosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& onCustomSort() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& mInitDone() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mReposition() {
		return *(T*)((uintptr_t)this + 0x55);
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
	template <typename T = void*> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearOutAllChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionVariableSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateReposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = Il2CppVector3> T get_maxOffsetValue() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAF24C))(this);
	}
	template <typename T = void> T set_maxOffsetValue(Il2CppVector3 value) {
		return ((T (*)(UITable*, Il2CppVector3))(Il2CppBase() + 0x2FAF260))(this, value);
	}
	template <typename T = void> T set_repositionNow(bool value) {
		return ((T (*)(UITable*, bool))(Il2CppBase() + 0x2FAF278))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChildList() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAF294))(this);
	}
	template <typename T = bool> T RemoveAllChild() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAF7A4))(this);
	}
	template <typename T = bool> T ClearOutAllChild() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAF978))(this);
	}
	template <typename T = void> T Sort(Il2CppList<uintptr_t>* list) {
		return ((T (*)(UITable*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2FAFAC0))(this, list);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAFC1C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAFCF0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAFE08))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FAFED4))(this);
	}
	template <typename T = void> T RepositionVariableSize(Il2CppList<uintptr_t>* children) {
		return ((T (*)(UITable*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2FAFFEC))(this, children);
	}
	template <typename T = void> T Reposition() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FB0CE4))(this);
	}
	template <typename T = void> T set_NeedLateReposition(bool value) {
		return ((T (*)(UITable*, bool))(Il2CppBase() + 0x2FB1154))(this, value);
	}
	template <typename T = void> T LateReposition() {
		return ((T (*)(UITable*))(Il2CppBase() + 0x2FB13B8))(this);
	}

};

}
