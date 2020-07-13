#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ResShakeOffDizzyMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ResShakeOffDizzyMsg"));
	}


	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(ResShakeOffDizzyMsg*))(Il2CppBase() + 0x4F9FA74))(this);
	}
	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4F9FB2C))(0, data, DataIndex, DataCount, Sequence);
	}

};

}
