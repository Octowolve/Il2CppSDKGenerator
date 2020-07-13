#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class IGTraceWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "IGTraceWrapper"));
	}


	template <typename T = Il2CppString*> T GetTraceId() {
		return ((T (*)(IGTraceWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T CreateContext(Il2CppString* parentContext, Il2CppString* privateType) {
		return ((T (*)(IGTraceWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, parentContext, privateType);
	}
	template <typename T = void> T SpanStart(Il2CppString* context, Il2CppString* name, Il2CppString* caller, Il2CppString* callee) {
		return ((T (*)(IGTraceWrapper*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, context, name, caller, callee);
	}
	template <typename T = void> T SpanFlush(Il2CppString* context, Il2CppString* key, Il2CppString* value) {
		return ((T (*)(IGTraceWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, context, key, value);
	}
	template <typename T = void> T SpanFinish(Il2CppString* context, Il2CppString* errCode, Il2CppString* errMsg) {
		return ((T (*)(IGTraceWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, context, errCode, errMsg);
	}

};

}
