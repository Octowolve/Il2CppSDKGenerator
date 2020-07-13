#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigCrypto
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigCrypto"));
	}

	template <typename T = uintptr_t> T& _Transform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _InputBuffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _InputBufferIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _InputBlockSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _OutputBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _OutputBufferIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _OutputBlockSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _finalBlockTransformed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StreamRead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* src, uintptr_t srcOffset, Il2CppArray<uintptr_t>* dst, int32_t dstOffset, int32_t count) {
		return ((T (*)(ConfigCrypto*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4636770))(this, src, srcOffset, dst, dstOffset, count);
	}
	template <typename T = int32_t> static T StreamRead(Il2CppArray<uintptr_t>* src, uintptr_t srcOffset, Il2CppArray<uintptr_t>* dst, int32_t dstOffset, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4637034))(0, src, srcOffset, dst, dstOffset, count);
	}

};

}
