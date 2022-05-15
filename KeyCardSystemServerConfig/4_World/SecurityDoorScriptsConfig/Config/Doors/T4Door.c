
modded class Land_DZ_T4Door 
{

    override string GetCrateClassName()
    {
        return "DZKeyCardContainer";
    }

    override void AddLoot( EntityAI crate )
    {
 
        int i;

        int rndIndex;
		EntityAI obj;
		EntityAI attachment;

        //! Weapons
        obj = crate.GetInventory().CreateInInventory("DZ_Barret");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("Tweaks_HuntingScope");
            
            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("DZ_Barret_Magazine");
        }


        obj = crate.GetInventory().CreateInInventory("DZ_SnowOwl");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("Tweaks_HuntingScope");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_DZ_SnowOwl_10Rnd");
        }
        obj = crate.GetInventory().CreateInInventory("Tweaks_M200");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("Tweaks_HuntingScope");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Tweaks_M200_Mag");
        }



        obj = crate.GetInventory().CreateInInventory("ExpansionSatchel");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("");
            obj.GetInventory().CreateAttachment("");

            attachment = obj.GetInventory().CreateAttachment("");
            if ( attachment ) attachment.GetInventory().CreateAttachment("");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("");
        }


        obj = crate.GetInventory().CreateInInventory("ExpansionSatchel");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("");
            obj.GetInventory().CreateAttachment("");

            attachment = obj.GetInventory().CreateAttachment("");
            if ( attachment ) attachment.GetInventory().CreateAttachment("");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("");
        }
        obj = crate.GetInventory().CreateInInventory("ExpansionRPG7");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("");
            obj.GetInventory().CreateAttachment("");

            attachment = obj.GetInventory().CreateAttachment("");
            if ( attachment ) attachment.GetInventory().CreateAttachment("");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("ExpansionAmmoRPG");
        }

        //! Food
        int foodItemsListCount = KEYCARD_FOOD_DRINKS.Count();

        for (i=0; i<Math.RandomInt(10,20); i++) 
        {
            string foodName = KEYCARD_FOOD_DRINKS.Get( Math.RandomInt( 0, foodItemsListCount ) );
            crate.GetInventory().CreateInInventory( foodName );
        }

        //! Backpacks
        int backpacksListCount = KEYCARD_BACKPACKS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string backPackName = KEYCARD_BACKPACKS.Get( Math.RandomInt( 0, backpacksListCount ) );
            crate.GetInventory().CreateInInventory( backPackName );
        }

        //! Vests
        int vestsListCount = KEYCARD_VESTS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string vestName = KEYCARD_VESTS.Get( Math.RandomInt( 0, vestsListCount ) );
            crate.GetInventory().CreateInInventory( vestName );
        }

        //! Shirts
        int shirtsListCount = KEYCARD_SHIRTS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string shirtName = KEYCARD_SHIRTS.Get( Math.RandomInt( 0, shirtsListCount ) );
            crate.GetInventory().CreateInInventory( shirtName );
        }

        //! Pants
        int pantsListCount = KEYCARD_PANTS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string pantName = KEYCARD_PANTS.Get( Math.RandomInt( 0, pantsListCount ) );
            crate.GetInventory().CreateInInventory( pantName );
        }

        //! Other
        int otherItemsList = KEYCARD_OTHERITEMS.Count();

        for (i=0; i<otherItemsList; i++) 
        {
            string otherName = KEYCARD_OTHERITEMS.Get( i );

            //! 50% chance
            if ( Math.RandomInt(0,2) == 1 ) crate.GetInventory().CreateInInventory( otherName );
        }
    }
};