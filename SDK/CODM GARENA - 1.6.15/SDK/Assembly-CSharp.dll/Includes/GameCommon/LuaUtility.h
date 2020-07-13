#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class LuaUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "LuaUtility"));
	}

	template <typename T = uintptr_t> static T& MessageBoxCallerObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& HotfixSoundList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageBoxCallbackHandler10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNullInCSharp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullNguiClickFunction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSoundHotfix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSoundHotfixImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> static T MessageBoxCallbackHandler0(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F2B70))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler1(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F2C40))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler2(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F2D10))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler3(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F2DE0))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler4(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F2EB0))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler5(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F2F80))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler6(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F3050))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler7(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F3120))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler8(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F31F0))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler9(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F32C0))(0, result, userContext);
	}
	template <typename T = void> static T MessageBoxCallbackHandler10(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x49F3390))(0, result, userContext);
	}
	template <typename T = bool> static T IsNullInCSharp(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49F3460))(0, obj);
	}
	template <typename T = void> static T PrintType(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49F3578))(0, o);
	}
	template <typename T = void> static T NullNguiClickFunction(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49F3780))(0, obj);
	}
	template <typename T = Il2CppString*> static T CheckSoundHotfix(uintptr_t soundGO, Il2CppString* soundName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x49F3848))(0, soundGO, soundName);
	}
	template <typename T = Il2CppString*> static T CheckSoundHotfixImpl(uintptr_t soundGO, Il2CppString* soundName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x49F3A58))(0, soundGO, soundName);
	}

};

}
