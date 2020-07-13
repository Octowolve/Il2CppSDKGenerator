#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendMessageDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendMessageDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, Il2CppString* param) {
		return ((T (*)(ApolloSendMessageDelegate*, uint64_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x451E2C8))(this, objectId, function, param);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, Il2CppString* param, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendMessageDelegate*, uint64_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x451E388))(this, objectId, function, param, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendMessageDelegate*, uintptr_t))(Il2CppBase() + 0x451E450))(this, result);
	}

};

}
