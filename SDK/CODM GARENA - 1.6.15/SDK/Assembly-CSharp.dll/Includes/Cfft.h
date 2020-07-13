#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Cfft
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Cfft"));
	}

	template <typename T = int32_t> T& N() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& which() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& log_2_N() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& pi2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& reversed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppList<Il2CppVector2>*>*> T& T() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppList<Il2CppVector2>*>*> T& c() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_t() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_fft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T reverse(int32_t i) {
		return ((T (*)(Cfft*, int32_t))(Il2CppBase() + 0x1D1C620))(this, i);
	}
	template <typename T = Il2CppVector2> T t(int32_t x, int32_t N) {
		return ((T (*)(Cfft*, int32_t, int32_t))(Il2CppBase() + 0x1D1C6F0))(this, x, N);
	}
	template <typename T = void> T fft(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output, int32_t stride, int32_t offset) {
		return ((T (*)(Cfft*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1D1C84C))(this, input, output, stride, offset);
	}

};

}
