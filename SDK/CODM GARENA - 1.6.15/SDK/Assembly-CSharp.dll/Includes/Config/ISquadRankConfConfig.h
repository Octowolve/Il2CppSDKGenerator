#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ISquadRankConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ISquadRankConfConfig"));
	}


	template <typename T = int32_t> T get_Level() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Small_Icon() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Sub_level() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_PointNeed() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_PointMax() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_DecLevelBuffer() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ReachPrize() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Num() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Gold() {
		return ((T (*)(ISquadRankConfConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}
