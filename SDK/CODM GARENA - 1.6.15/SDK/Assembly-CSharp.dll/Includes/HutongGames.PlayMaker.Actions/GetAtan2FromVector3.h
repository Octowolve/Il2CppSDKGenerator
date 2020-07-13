#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAtan2FromVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAtan2FromVector3"));
	}

	template <typename T = uintptr_t> T& vector3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& xAxis() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& yAxis() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& RadToDeg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAtan2FromVector3*))(Il2CppBase() + 0x50855E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAtan2FromVector3*))(Il2CppBase() + 0x5085628))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAtan2FromVector3*))(Il2CppBase() + 0x5085838))(this);
	}
	template <typename T = void> T DoATan() {
		return ((T (*)(GetAtan2FromVector3*))(Il2CppBase() + 0x5085654))(this);
	}

};

}
