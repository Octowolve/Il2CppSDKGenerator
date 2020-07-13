#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PuppetMasterTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PuppetMasterTools"));
	}


	template <typename T = void> static T PositionRagdoll(uintptr_t puppetMaster) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38D0C20))(0, puppetMaster);
	}
	template <typename T = void> static T RealignRagdoll(uintptr_t puppetMaster) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38D147C))(0, puppetMaster);
	}
	template <typename T = Il2CppVector3> static T DirectionIntToVector3(int32_t dir) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x38D21F0))(0, dir);
	}
	template <typename T = int32_t> static T DirectionVector3ToInt(Il2CppVector3 dir) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x38D2230))(0, dir);
	}

};

}
