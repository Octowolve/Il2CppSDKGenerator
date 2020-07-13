#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GCLInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GCLInfo"));
	}

	template <typename T = int32_t> T& EventID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MsgID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MsgArrayID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AreaLimit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TeamCountLimit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ChaMsgType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& TargetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Priority3P() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& EffectiveDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& TriggerTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPastTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB06B4))(this);
	}
	template <typename T = bool> T get_IsCanBreak() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0BF8))(this);
	}
	template <typename T = bool> T get_IsSystem() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0C0C))(this);
	}
	template <typename T = bool> T get_IsCharacter() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0C20))(this);
	}
	template <typename T = bool> T get_Is1P() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0C30))(this);
	}
	template <typename T = bool> T get_Is3P() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0CF4))(this);
	}
	template <typename T = int32_t> T GetPriority() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0DBC))(this);
	}
	template <typename T = bool> T IsPastTime() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0E80))(this);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0F54))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(GCLInfo*, bool))(Il2CppBase() + 0x1EB0F5C))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0F64))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB0FFC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(GCLInfo*))(Il2CppBase() + 0x1EB1094))(this);
	}

};

}
