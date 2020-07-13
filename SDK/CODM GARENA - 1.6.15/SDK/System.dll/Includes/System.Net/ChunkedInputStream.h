#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ChunkedInputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ChunkedInputStream"));
	}

	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& decoder() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& no_more_data() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(ChunkedInputStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x42B77D4))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(ChunkedInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B7828))(this, buffer, offset, count, cback, state);
	}
	template <typename T = void> T OnRead(uintptr_t base_ares) {
		return ((T (*)(ChunkedInputStream*, uintptr_t))(Il2CppBase() + 0x42B7DC0))(this, base_ares);
	}
	template <typename T = int32_t> T EndRead(uintptr_t ares) {
		return ((T (*)(ChunkedInputStream*, uintptr_t))(Il2CppBase() + 0x42B84E4))(this, ares);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ChunkedInputStream*))(Il2CppBase() + 0x42B87EC))(this);
	}

};

}
