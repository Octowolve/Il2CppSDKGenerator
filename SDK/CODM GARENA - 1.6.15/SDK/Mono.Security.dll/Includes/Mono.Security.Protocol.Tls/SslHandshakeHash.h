#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class SslHandshakeHash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "SslHandshakeHash"));
	}

	template <typename T = uintptr_t> T& md5() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hashing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& secret() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& innerPadMD5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& outerPadMD5() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& innerPadSHA() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& outerPadSHA() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(SslHandshakeHash*))(Il2CppBase() + 0x4BF2D24))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SslHandshakeHash*))(Il2CppBase() + 0x4BF2F6C))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* array, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SslHandshakeHash*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4BF32DC))(this, array, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(uintptr_t rsa) {
		return ((T (*)(SslHandshakeHash*, uintptr_t))(Il2CppBase() + 0x4BF3368))(this, rsa);
	}
	template <typename T = bool> T VerifySignature(uintptr_t rsa, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(SslHandshakeHash*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF34C4))(this, rsa, rgbSignature);
	}
	template <typename T = void> T initializePad() {
		return ((T (*)(SslHandshakeHash*))(Il2CppBase() + 0x4BF2D88))(this);
	}

};

}
