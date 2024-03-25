static unsigned f1 ()
{
	return 10;
}

namespace
{
	unsigned f2 ()
	{
		return 20;
	}
}

namespace
{
	unsigned f3 ()
	{
		return 30;
	}
}

unsigned g ()
{
	return f1 () + f2 () + f3 ();
}
