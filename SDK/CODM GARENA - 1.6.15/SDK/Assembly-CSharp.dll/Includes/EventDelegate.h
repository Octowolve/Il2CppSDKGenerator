#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventDelegate"));
	}

	template <typename T = uintptr_t> T& mTarget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& mMethodName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mParameters() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& oneShot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCachedCallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mRawDelegate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mCached() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& mMethod() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mParameterInfos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mArgs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& s_Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMethodName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD093C))(this);
	}
	template <typename T = void> T set_target(uintptr_t value) {
		return ((T (*)(EventDelegate*, uintptr_t))(Il2CppBase() + 0x4BD0944))(this, value);
	}
	template <typename T = Il2CppString*> T get_methodName() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD0968))(this);
	}
	template <typename T = void> T set_methodName(Il2CppString* value) {
		return ((T (*)(EventDelegate*, Il2CppString*))(Il2CppBase() + 0x4BD0970))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_parameters() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD0994))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD1614))(this);
	}
	template <typename T = bool> T get_isEnabled() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD1754))(this);
	}
	template <typename T = Il2CppString*> static T GetMethodName(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BD18BC))(0, callback);
	}
	template <typename T = bool> static T IsValid(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BD19C0))(0, callback);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(EventDelegate*, uintptr_t))(Il2CppBase() + 0x4BD1AAC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD1DE0))(this);
	}
	template <typename T = void> T Set(uintptr_t call) {
		return ((T (*)(EventDelegate*, uintptr_t))(Il2CppBase() + 0x4BD0508))(this, call);
	}
	template <typename T = void> T Set_1(uintptr_t target, Il2CppString* methodName) {
		return ((T (*)(EventDelegate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BD0840))(this, target, methodName);
	}
	template <typename T = void> T Cache() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD09BC))(this);
	}
	template <typename T = bool> T Execute() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD20D8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD1EE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD315C))(this);
	}
	template <typename T = void> static T Execute_1(Il2CppList<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4BD344C))(0, list);
	}
	template <typename T = bool> static T IsValid_1(Il2CppList<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4BD3754))(0, list);
	}
	template <typename T = uintptr_t> static T Set_2(Il2CppList<uintptr_t>* list, uintptr_t callback) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4BD38B8))(0, list, callback);
	}
	template <typename T = void> static T Set_3(Il2CppList<uintptr_t>* list, uintptr_t del) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4BD39F0))(0, list, del);
	}
	template <typename T = uintptr_t> static T Add(Il2CppList<uintptr_t>* list, uintptr_t callback) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4BC2308))(0, list, callback);
	}
	template <typename T = uintptr_t> static T Add_1(Il2CppList<uintptr_t>* list, uintptr_t callback, bool oneShot) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4BD3B0C))(0, list, callback, oneShot);
	}
	template <typename T = void> static T Add_2(Il2CppList<uintptr_t>* list, uintptr_t ev) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4BD3D68))(0, list, ev);
	}
	template <typename T = void> static T Add_3(Il2CppList<uintptr_t>* list, uintptr_t ev, bool oneShot) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4BD3E98))(0, list, ev, oneShot);
	}
	template <typename T = bool> static T Remove(Il2CppList<uintptr_t>* list, uintptr_t callback) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4BD42D4))(0, list, callback);
	}
	template <typename T = bool> static T Remove_1(Il2CppList<uintptr_t>* list, uintptr_t ev) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4BD447C))(0, list, ev);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(EventDelegate*, uintptr_t))(Il2CppBase() + 0x4BD46E4))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD46EC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(EventDelegate*))(Il2CppBase() + 0x4BD46F4))(this);
	}

};

}
