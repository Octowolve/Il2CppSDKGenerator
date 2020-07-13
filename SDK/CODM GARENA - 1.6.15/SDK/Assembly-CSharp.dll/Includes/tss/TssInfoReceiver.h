#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace tss {

class TssInfoReceiver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "tss", "TssInfoReceiver"));
	}


	template <typename T = void> T onReceive(int32_t tssInfoType, Il2CppString* info) {
		return ((T (*)(TssInfoReceiver*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, tssInfoType, info);
	}

};

}
