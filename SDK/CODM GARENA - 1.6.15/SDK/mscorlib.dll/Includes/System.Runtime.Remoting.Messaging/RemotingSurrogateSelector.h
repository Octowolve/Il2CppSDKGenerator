#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class RemotingSurrogateSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector"));
	}

	template <typename T = uintptr_t> static T& s_cachedTypeObjRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _objRefSurrogate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _objRemotingSurrogate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& _next() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T GetSurrogate(uintptr_t type, uintptr_t context, uintptr_t* ssout) {
		return ((T (*)(RemotingSurrogateSelector*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B3CDCC))(this, type, context, ssout);
	}

};

}
