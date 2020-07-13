#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKExtend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKExtend"));
	}

	template <typename T = void*> static T& ExtendRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_ExtendRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_ExtendRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExtendRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T extendInvokeAdapter(Il2CppString* channel, Il2CppString* extendMethodName, Il2CppString* paramsJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BF618))(0, channel, extendMethodName, paramsJson);
	}
	template <typename T = void> static T add_ExtendRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46BF76C))(0, value);
	}
	template <typename T = void> static T remove_ExtendRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46BF96C))(0, value);
	}
	template <typename T = Il2CppString*> static T Invoke(Il2CppString* channel, Il2CppString* extendMethodName, Il2CppString* paramsJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BFB6C))(0, channel, extendMethodName, paramsJson);
	}
	template <typename T = void> static T OnExtendRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46C00F0))(0, json);
	}

};

}
