#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class DataRadar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "DataRadar"));
	}

	template <typename T = uintptr_t> T& RadarRoot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Radar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NoneRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Datas() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(Il2CppList<float>* datas, Il2CppList<Il2CppString*>* names) {
		return ((T (*)(DataRadar*, Il2CppList<float>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x532A514))(this, datas, names);
	}
	template <typename T = int32_t> static T SetDatam__0(float a) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x532A8D0))(0, a);
	}

};

}
