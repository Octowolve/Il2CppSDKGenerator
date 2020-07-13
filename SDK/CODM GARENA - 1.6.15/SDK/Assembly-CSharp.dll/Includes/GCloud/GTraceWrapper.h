#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GTraceWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GTraceWrapper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpanStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpanFlush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpanFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetTraceId() {
		return ((T (*)(GTraceWrapper*))(Il2CppBase() + 0x4535BF8))(this);
	}
	template <typename T = Il2CppString*> T CreateContext(Il2CppString* parentContext, Il2CppString* privateType) {
		return ((T (*)(GTraceWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4535EA8))(this, parentContext, privateType);
	}
	template <typename T = void> T SpanStart(Il2CppString* context, Il2CppString* name, Il2CppString* caller, Il2CppString* callee) {
		return ((T (*)(GTraceWrapper*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45361C0))(this, context, name, caller, callee);
	}
	template <typename T = void> T SpanFlush(Il2CppString* context, Il2CppString* key, Il2CppString* value) {
		return ((T (*)(GTraceWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4536448))(this, context, key, value);
	}
	template <typename T = void> T SpanFinish(Il2CppString* context, Il2CppString* errCode, Il2CppString* errMsg) {
		return ((T (*)(GTraceWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45366A8))(this, context, errCode, errMsg);
	}
	template <typename T = bool> static T gcloudcore_gtrace_GetTraceId(uintptr_t value, int32_t len) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4535D84))(0, value, len);
	}
	template <typename T = bool> static T gcloudcore_gtrace_CreateContext(Il2CppString* parentContext, Il2CppString* privateType, uintptr_t value, int32_t len) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x4536060))(0, parentContext, privateType, value, len);
	}
	template <typename T = void> static T gcloudcore_gtrace_SpanStart(Il2CppString* context, Il2CppString* name, Il2CppString* caller, Il2CppString* callee) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45362F0))(0, context, name, caller, callee);
	}
	template <typename T = void> static T gcloudcore_gtrace_SpanFlush(Il2CppString* context, Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x453656C))(0, context, key, value);
	}
	template <typename T = void> static T gcloudcore_gtrace_SpanFinish(Il2CppString* context, Il2CppString* errCode, Il2CppString* errMsg) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45367CC))(0, context, errCode, errMsg);
	}

};

}
