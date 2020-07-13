#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace NWH {

class VertexData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NWH", "VertexData"));
	}

	template <typename T = float> T& dist() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
